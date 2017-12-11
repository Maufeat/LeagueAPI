#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class BuybackState { /**/ 
    FORCED_NOT_READY_e = 1, /**/ 
    NOT_READY_e = 0, /**/ 
    READY_e = 2, /**/ 
  };
  static void to_json(json& j, const BuybackState& v) {
    switch(v) { 
    case BuybackState::FORCED_NOT_READY_e:
      j = "FORCED_NOT_READY";
    break;
    case BuybackState::NOT_READY_e:
      j = "NOT_READY";
    break;
    case BuybackState::READY_e:
      j = "READY";
    break;
    };
  }
  static void from_json(const json& j, BuybackState& v) {
    auto s = j.get<std::string>(); 
    if(s == "FORCED_NOT_READY") {
      v = BuybackState::FORCED_NOT_READY_e;
      return;
    } 
    if(s == "NOT_READY") {
      v = BuybackState::NOT_READY_e;
      return;
    } 
    if(s == "READY") {
      v = BuybackState::READY_e;
      return;
    } 
  }
} 