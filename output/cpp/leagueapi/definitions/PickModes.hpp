#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PickModes { /**/ 
    DONE_e = 2, /**/ 
    IN_PROGRESS_e = 1, /**/ 
    NOT_PICKING_e = 0, /**/ 
  };
  static void to_json(json& j, const PickModes& v) {
    switch(v) { 
    case PickModes::DONE_e:
      j = "DONE";
    break;
    case PickModes::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case PickModes::NOT_PICKING_e:
      j = "NOT_PICKING";
    break;
    };
  }
  static void from_json(const json& j, PickModes& v) {
    auto s = j.get<std::string>(); 
    if(s == "DONE") {
      v = PickModes::DONE_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = PickModes::IN_PROGRESS_e;
      return;
    } 
    if(s == "NOT_PICKING") {
      v = PickModes::NOT_PICKING_e;
      return;
    } 
  }
} 