#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct Position {  
    BOTTOM_e = 2,
    FILL_e = 5,
    JUNGLE_e = 3,
    MIDDLE_e = 1,
    TOP_e = 0,
    UNSELECTED_e = 6,
    UTILITY_e = 4,
  };
  inline void to_json(json& j, const Position& v) {
    if(v == Position::BOTTOM_e) {
      j = "BOTTOM";
      return;
    }
    if(v == Position::FILL_e) {
      j = "FILL";
      return;
    }
    if(v == Position::JUNGLE_e) {
      j = "JUNGLE";
      return;
    }
    if(v == Position::MIDDLE_e) {
      j = "MIDDLE";
      return;
    }
    if(v == Position::TOP_e) {
      j = "TOP";
      return;
    }
    if(v == Position::UNSELECTED_e) {
      j = "UNSELECTED";
      return;
    }
    if(v == Position::UTILITY_e) {
      j = "UTILITY";
      return;
    }
  }
  inline void from_json(const json& j, Position& v) {
    if(j.get<std::string>() == "BOTTOM") {
      v = Position::BOTTOM_e;
      return;
    } 
    if(j.get<std::string>() == "FILL") {
      v = Position::FILL_e;
      return;
    } 
    if(j.get<std::string>() == "JUNGLE") {
      v = Position::JUNGLE_e;
      return;
    } 
    if(j.get<std::string>() == "MIDDLE") {
      v = Position::MIDDLE_e;
      return;
    } 
    if(j.get<std::string>() == "TOP") {
      v = Position::TOP_e;
      return;
    } 
    if(j.get<std::string>() == "UNSELECTED") {
      v = Position::UNSELECTED_e;
      return;
    } 
    if(j.get<std::string>() == "UTILITY") {
      v = Position::UTILITY_e;
      return;
    } 
  }
}