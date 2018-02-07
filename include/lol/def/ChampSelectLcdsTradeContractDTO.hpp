#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsTradeContractDTO { 
    std::string requesterInternalSummonerName;
    std::string responderInternalSummonerName;
    int32_t requesterChampionId;
    int32_t responderChampionId;
    std::string state; 
  };
  inline void to_json(json& j, const ChampSelectLcdsTradeContractDTO& v) {
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName; 
    j["responderInternalSummonerName"] = v.responderInternalSummonerName; 
    j["requesterChampionId"] = v.requesterChampionId; 
    j["responderChampionId"] = v.responderChampionId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, ChampSelectLcdsTradeContractDTO& v) {
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>(); 
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>(); 
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>(); 
    v.responderChampionId = j.at("responderChampionId").get<int32_t>(); 
    v.state = j.at("state").get<std::string>(); 
  }
}