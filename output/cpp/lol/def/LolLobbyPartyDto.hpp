#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyGatekeeperRestrictionDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace lol {
  struct LolLobbyPartyDto { 
    uint64_t version;
    uint64_t activityStartedUtcMillis;
    std::string platformId;
    LolLobbyQueueRestrictionDto activeRestrictions;
    std::string partyId;
    LolLobbyGameModeDto gameMode;
    int64_t eligibilityHash;
    int32_t maxPartySize;
    std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>> eligibilityRestrictions;
    std::string partyType;
    bool activityLocked;
    uint64_t activityResumeUtcMillis;
    std::vector<LolLobbyPartyMemberDto> players;
    LolLobbyPartyChatDto chat; 
  };
  inline void to_json(json& j, const LolLobbyPartyDto& v) {
    j["version"] = v.version; 
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis; 
    j["platformId"] = v.platformId; 
    j["activeRestrictions"] = v.activeRestrictions; 
    j["partyId"] = v.partyId; 
    j["gameMode"] = v.gameMode; 
    j["eligibilityHash"] = v.eligibilityHash; 
    j["maxPartySize"] = v.maxPartySize; 
    if(v.eligibilityRestrictions)
      j["eligibilityRestrictions"] = *v.eligibilityRestrictions;
    j["partyType"] = v.partyType; 
    j["activityLocked"] = v.activityLocked; 
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis; 
    j["players"] = v.players; 
    j["chat"] = v.chat; 
  }
  inline void from_json(const json& j, LolLobbyPartyDto& v) {
    v.version = j.at("version").get<uint64_t>(); 
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
    v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
    if(auto it = j.find("eligibilityRestrictions"); it != j.end() && !it->is_null())
      v.eligibilityRestrictions = it->get<std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>>>(); 
    v.partyType = j.at("partyType").get<std::string>(); 
    v.activityLocked = j.at("activityLocked").get<bool>(); 
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>(); 
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto>>(); 
    v.chat = j.at("chat").get<LolLobbyPartyChatDto>(); 
  }
}