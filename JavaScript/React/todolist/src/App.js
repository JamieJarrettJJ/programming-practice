import cx from "classnames";
import { Component } from "react";

export default class TodoList extends Component {
  constructor(props) {
    super(props);

    this.state = {
      items: [],
      remaining: 0,
      active: [],
    };

    this.addItem = this.addItem.bind(this);
  }

  handleToggle = (item) => {
    this.setState({ active: !this.state.active });
    item.active = !item.active;
  };

  createTasks = (item) => {
    return (
      <li
        className={item.active ? "is-done" : null}
        onClick={this.handleToggle}
        key={item.key}
      >
        {item.text}
      </li>
    );
  };

  addItem(e) {
    if (this._inputElement.value !== "") {
      var newItem = {
        text: this._inputElement.value,
        key: Date.now(),
        active: false,
      };
      this.setState({
        remaining: this.state.remaining + 1,
      });
    }

    this.setState((prevState) => {
      return {
        items: prevState.items.concat(newItem),
      };
    });

    this._inputElement.value = "";

    e.preventDefault();
  }

  render() {
    var listItems = this.state.items.map(this.createTasks);
    var listLength = this.state.items.length;

    return (
      <>
        <div>
          <h2>Todo List</h2>
          <form onSubmit={this.addItem}>
            <input ref={(a) => (this._inputElement = a)}></input>
            <button type="submit">Add</button>
          </form>
          <p>
            {this.state.remaining} remaining out of {listLength} tasks
          </p>
          <ul className="theList">{listItems}</ul>
        </div>
        <style>{`
                    .is-done {
                        text-decoration: line-through;
                    }
                `}</style>
      </>
    );
  }
}
