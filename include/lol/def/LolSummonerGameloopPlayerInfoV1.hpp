#pragma once
#include "../base_def.hpp" 
#include "LolSummonerRerollDataBagForClientV1.hpp"
namespace lol {
  struct LolSummonerGameloopPlayerInfoV1 { 
    json autoFillDataBagByQueueId;
    LolSummonerRerollDataBagForClientV1 rerollDataBag; 
  };
  inline void to_json(json& j, const LolSummonerGameloopPlayerInfoV1& v) {
    j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId; 
    j["rerollDataBag"] = v.rerollDataBag; 
  }
  inline void from_json(const json& j, LolSummonerGameloopPlayerInfoV1& v) {
    v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<json>(); 
    v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1>(); 
  }
}