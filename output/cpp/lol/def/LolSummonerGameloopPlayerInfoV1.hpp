#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSummonerRerollDataBagForClientV1.hpp>
namespace lol {
  struct LolSummonerGameloopPlayerInfoV1 { 
    LolSummonerRerollDataBagForClientV1 rerollDataBag;
    json autoFillDataBagByQueueId; 
  };
  void to_json(json& j, const LolSummonerGameloopPlayerInfoV1& v) {
  j["rerollDataBag"] = v.rerollDataBag; 
  j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId; 
  }
  void from_json(const json& j, LolSummonerGameloopPlayerInfoV1& v) {
  v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1>(); 
  v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<json>(); 
  }
}