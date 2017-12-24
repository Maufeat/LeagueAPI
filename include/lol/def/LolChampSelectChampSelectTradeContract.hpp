#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectChampSelectTradeState.hpp"
namespace lol {
  struct LolChampSelectChampSelectTradeContract { 
    int64_t id;
    LolChampSelectChampSelectTradeState state;
    int64_t cellId; 
  };
  inline void to_json(json& j, const LolChampSelectChampSelectTradeContract& v) {
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["cellId"] = v.cellId; 
  }
  inline void from_json(const json& j, LolChampSelectChampSelectTradeContract& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.state = j.at("state").get<LolChampSelectChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
  }
}