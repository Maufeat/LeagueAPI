#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct PickModes {  
    DONE_e = 2,
    IN_PROGRESS_e = 1,
    NOT_PICKING_e = 0,
  };
  inline void to_json(json& j, const PickModes& v) {
    if(v == PickModes::DONE_e) {
      j = "DONE";
      return;
    }
    if(v == PickModes::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == PickModes::NOT_PICKING_e) {
      j = "NOT_PICKING";
      return;
    }
  }
  inline void from_json(const json& j, PickModes& v) {
    if(j.get<std::string>() == "DONE") {
      v = PickModes::DONE_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = PickModes::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_PICKING") {
      v = PickModes::NOT_PICKING_e;
      return;
    } 
  }
}