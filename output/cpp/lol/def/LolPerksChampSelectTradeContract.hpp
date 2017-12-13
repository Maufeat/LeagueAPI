#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksChampSelectTradeState.hpp>
namespace lol {
  struct LolPerksChampSelectTradeContract { 
    LolPerksChampSelectTradeState state;
    int64_t cellId;
    int64_t id; 
  };
  void to_json(json& j, const LolPerksChampSelectTradeContract& v) {
    j["state"] = v.state; 
    j["cellId"] = v.cellId; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolPerksChampSelectTradeContract& v) {
    v.state = j.at("state").get<LolPerksChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}