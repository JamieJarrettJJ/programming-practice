import React, { useState } from "react";
import Video from "../../videos/video.mp4";
import { Button } from "../Button/ButtonElements";
import Typewriter from "typewriter-effect";
import {
  HeroContainer,
  HeroBg,
  VideoBg,
  HeroContent,
  HeroH1,
  HeroP,
  HeroBtnWrapper,
  ArrowForward,
  ArrowRight,
} from "./HeroElements";

const HeroSection = () => {
  const [hover, setHover] = useState(false);

  const onHover = () => {
    setHover(!hover);
  };

  return (
    <HeroContainer id="home">
      <HeroBg>
        <VideoBg autoPlay loop muted src={Video} type="video/mp4" />
      </HeroBg>
      <HeroContent>
        <HeroH1>
          <Typewriter
            onInit={(typewriter) => {
              typewriter
                .typeString("Virtual Networking")
                .pauseFor(500)
                .deleteAll()
                .typeString("Net. Working.")
                .start();
            }}
          />
        </HeroH1>
        <HeroP>
          Your <i>network</i> is your <i>net worth</i>. Our mission is to help
          start growing your network today.
        </HeroP>
        <HeroBtnWrapper>
          <Button
            to="contact"
            onMouseEnter={onHover}
            onMouseLeave={onHover}
            primary="true"
            dark="true"
          >
            Get Started {hover ? <ArrowForward /> : <ArrowRight />}
          </Button>
        </HeroBtnWrapper>
      </HeroContent>
    </HeroContainer>
  );
};

export default HeroSection;
