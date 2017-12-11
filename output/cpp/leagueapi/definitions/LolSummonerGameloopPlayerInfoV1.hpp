#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolSummonerRerollDataBagForClientV1.hpp>

namespace leagueapi {
  struct LolSummonerGameloopPlayerInfoV1 { /**/ 
    LolSummonerRerollDataBagForClientV1 rerollDataBag;/**/
    json autoFillDataBagByQueueId;/**/
  };
  static void to_json(json& j, const LolSummonerGameloopPlayerInfoV1& v) { 
    j["rerollDataBag"] = v.rerollDataBag;
    j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId;
  }
  static void from_json(const json& j, LolSummonerGameloopPlayerInfoV1& v) { 
    v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1>(); 
    v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<json>(); 
  }
} 