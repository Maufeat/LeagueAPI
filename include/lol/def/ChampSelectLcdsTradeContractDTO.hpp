#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsTradeContractDTO { 
    int32_t requesterChampionId;
    std::string responderInternalSummonerName;
    std::string state;
    std::string requesterInternalSummonerName;
    int32_t responderChampionId; 
  };
  inline void to_json(json& j, const ChampSelectLcdsTradeContractDTO& v) {
    j["requesterChampionId"] = v.requesterChampionId; 
    j["responderInternalSummonerName"] = v.responderInternalSummonerName; 
    j["state"] = v.state; 
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName; 
    j["responderChampionId"] = v.responderChampionId; 
  }
  inline void from_json(const json& j, ChampSelectLcdsTradeContractDTO& v) {
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>(); 
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>(); 
    v.responderChampionId = j.at("responderChampionId").get<int32_t>(); 
  }
}