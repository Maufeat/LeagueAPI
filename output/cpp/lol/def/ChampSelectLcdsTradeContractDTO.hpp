#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ChampSelectLcdsTradeContractDTO { 
    int32_t responderChampionId;
    int32_t requesterChampionId;
    std::string state;
    std::string requesterInternalSummonerName;
    std::string responderInternalSummonerName; 
  };
  void to_json(json& j, const ChampSelectLcdsTradeContractDTO& v) {
  j["responderChampionId"] = v.responderChampionId; 
  j["requesterChampionId"] = v.requesterChampionId; 
  j["state"] = v.state; 
  j["requesterInternalSummonerName"] = v.requesterInternalSummonerName; 
  j["responderInternalSummonerName"] = v.responderInternalSummonerName; 
  }
  void from_json(const json& j, ChampSelectLcdsTradeContractDTO& v) {
  v.responderChampionId = j.at("responderChampionId").get<int32_t>(); 
  v.requesterChampionId = j.at("requesterChampionId").get<int32_t>(); 
  v.state = j.at("state").get<std::string>(); 
  v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>(); 
  v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>(); 
  }
}