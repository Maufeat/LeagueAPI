#pragma once
#include "../base_def.hpp" 
#include "LolSummonerRerollDataBagForClientV1.hpp"
namespace lol {
  struct LolSummonerGameloopPlayerInfoV1 { 
    LolSummonerRerollDataBagForClientV1 rerollDataBag;
    json autoFillDataBagByQueueId; 
  };
  inline void to_json(json& j, const LolSummonerGameloopPlayerInfoV1& v) {
    j["rerollDataBag"] = v.rerollDataBag; 
    j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId; 
  }
  inline void from_json(const json& j, LolSummonerGameloopPlayerInfoV1& v) {
    v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1>(); 
    v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<json>(); 
  }
}