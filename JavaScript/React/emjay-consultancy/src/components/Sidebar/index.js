import { FaWhatsapp } from "react-icons/fa";
import React from "react";
import {
  SidebarContainer,
  Icon,
  CloseIcon,
  SidebarWrapper,
  SidebarMenu,
  SidebarLink,
  SideBtnWrap,
  SidebarRoute,
} from "./SidebarElements";

const Sidebar = ({ isOpen, toggle }) => {
  return (
    <SidebarContainer isOpen={isOpen} onClick={toggle}>
      <Icon onClick={toggle}>
        <CloseIcon />
      </Icon>
      <SidebarWrapper>
        <SidebarMenu>
          <SidebarLink to="about">About</SidebarLink>
          <SidebarLink to="services">Services</SidebarLink>
          <SidebarLink to="articles">Articles</SidebarLink>
          <SidebarLink to="testimonials">Testimonials</SidebarLink>
          <SidebarLink to="team">Team</SidebarLink>
        </SidebarMenu>
        <SideBtnWrap>
          <SidebarRoute to="#contact">
            Contact <FaWhatsapp />
          </SidebarRoute>
        </SideBtnWrap>
      </SidebarWrapper>
    </SidebarContainer>
  );
};

export default Sidebar;
