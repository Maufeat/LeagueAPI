#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectTradeState.hpp>
namespace lol {
  struct LolChampSelectLegacyChampSelectTradeContract { 
    LolChampSelectLegacyChampSelectTradeState state;
    int64_t cellId;
    int64_t id; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectTradeContract& v) {
    j["state"] = v.state; 
    j["cellId"] = v.cellId; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectTradeContract& v) {
    v.state = j.at("state").get<LolChampSelectLegacyChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}