#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ChampSelectLcdsTradeContractDTO { 
    std::string requesterInternalSummonerName;
    std::string responderInternalSummonerName;
    int32_t responderChampionId;
    int32_t requesterChampionId;
    std::string state; 
  };
  void to_json(json& j, const ChampSelectLcdsTradeContractDTO& v) {
  j["requesterInternalSummonerName"] = v.requesterInternalSummonerName; 
  j["responderInternalSummonerName"] = v.responderInternalSummonerName; 
  j["responderChampionId"] = v.responderChampionId; 
  j["requesterChampionId"] = v.requesterChampionId; 
  j["state"] = v.state; 
  }
  void from_json(const json& j, ChampSelectLcdsTradeContractDTO& v) {
  v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>(); 
  v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>(); 
  v.responderChampionId = j.at("responderChampionId").get<int32_t>(); 
  v.requesterChampionId = j.at("requesterChampionId").get<int32_t>(); 
  v.state = j.at("state").get<std::string>(); 
  }
}