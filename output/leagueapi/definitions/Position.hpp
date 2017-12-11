#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class Position { /**/ 
    BOTTOM_e = 2, /**/ 
    FILL_e = 5, /**/ 
    JUNGLE_e = 3, /**/ 
    MIDDLE_e = 1, /**/ 
    TOP_e = 0, /**/ 
    UNSELECTED_e = 6, /**/ 
    UTILITY_e = 4, /**/ 
  };
  static void to_json(json& j, const Position& v) {
    switch(v) { 
    case Position::BOTTOM_e:
      j = "BOTTOM";
    break;
    case Position::FILL_e:
      j = "FILL";
    break;
    case Position::JUNGLE_e:
      j = "JUNGLE";
    break;
    case Position::MIDDLE_e:
      j = "MIDDLE";
    break;
    case Position::TOP_e:
      j = "TOP";
    break;
    case Position::UNSELECTED_e:
      j = "UNSELECTED";
    break;
    case Position::UTILITY_e:
      j = "UTILITY";
    break;
    };
  }
  static void from_json(const json& j, Position& v) {
    auto s = j.get<std::string>(); 
    if(s == "BOTTOM") {
      v = Position::BOTTOM_e;
      return;
    } 
    if(s == "FILL") {
      v = Position::FILL_e;
      return;
    } 
    if(s == "JUNGLE") {
      v = Position::JUNGLE_e;
      return;
    } 
    if(s == "MIDDLE") {
      v = Position::MIDDLE_e;
      return;
    } 
    if(s == "TOP") {
      v = Position::TOP_e;
      return;
    } 
    if(s == "UNSELECTED") {
      v = Position::UNSELECTED_e;
      return;
    } 
    if(s == "UTILITY") {
      v = Position::UTILITY_e;
      return;
    } 
  }
} 