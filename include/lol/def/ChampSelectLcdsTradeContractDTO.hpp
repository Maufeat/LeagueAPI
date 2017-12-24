#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsTradeContractDTO { 
    std::string state;
    int32_t responderChampionId;
    int32_t requesterChampionId;
    std::string responderInternalSummonerName;
    std::string requesterInternalSummonerName; 
  };
  inline void to_json(json& j, const ChampSelectLcdsTradeContractDTO& v) {
    j["state"] = v.state; 
    j["responderChampionId"] = v.responderChampionId; 
    j["requesterChampionId"] = v.requesterChampionId; 
    j["responderInternalSummonerName"] = v.responderInternalSummonerName; 
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName; 
  }
  inline void from_json(const json& j, ChampSelectLcdsTradeContractDTO& v) {
    v.state = j.at("state").get<std::string>(); 
    v.responderChampionId = j.at("responderChampionId").get<int32_t>(); 
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>(); 
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>(); 
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>(); 
  }
}