#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct BuybackState {  
    FORCED_NOT_READY_e = 1,
    NOT_READY_e = 0,
    READY_e = 2,
  };
  inline void to_json(json& j, const BuybackState& v) {
    if(v == BuybackState::FORCED_NOT_READY_e) {
      j = "FORCED_NOT_READY";
      return;
    }
    if(v == BuybackState::NOT_READY_e) {
      j = "NOT_READY";
      return;
    }
    if(v == BuybackState::READY_e) {
      j = "READY";
      return;
    }
  }
  inline void from_json(const json& j, BuybackState& v) {
    if(j.get<std::string>() == "FORCED_NOT_READY") {
      v = BuybackState::FORCED_NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_READY") {
      v = BuybackState::NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "READY") {
      v = BuybackState::READY_e;
      return;
    } 
  }
}