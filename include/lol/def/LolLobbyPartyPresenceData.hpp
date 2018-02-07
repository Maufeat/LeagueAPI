#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyPartyPresenceData { 
    std::string partyId;
    int32_t queueId;
    std::vector<uint64_t> summoners; 
  };
  inline void to_json(json& j, const LolLobbyPartyPresenceData& v) {
    j["partyId"] = v.partyId; 
    j["queueId"] = v.queueId; 
    j["summoners"] = v.summoners; 
  }
  inline void from_json(const json& j, LolLobbyPartyPresenceData& v) {
    v.partyId = j.at("partyId").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.summoners = j.at("summoners").get<std::vector<uint64_t>>(); 
  }
}