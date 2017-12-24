#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueRestrictionDto.hpp"
#include "LolLobbyGatekeeperRestrictionDto.hpp"
#include "LolLobbyPartyChatDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyGameModeDto.hpp"
namespace lol {
  struct LolLobbyPartyDto { 
    std::string partyType;
    std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>> eligibilityRestrictions;
    std::vector<LolLobbyPartyMemberDto> players;
    std::string platformId;
    bool activityLocked;
    int32_t maxPartySize;
    std::string partyId;
    uint64_t activityResumeUtcMillis;
    LolLobbyGameModeDto gameMode;
    uint64_t version;
    LolLobbyQueueRestrictionDto activeRestrictions;
    uint64_t activityStartedUtcMillis;
    LolLobbyPartyChatDto chat;
    int64_t eligibilityHash; 
  };
  inline void to_json(json& j, const LolLobbyPartyDto& v) {
    j["partyType"] = v.partyType; 
    if(v.eligibilityRestrictions)
      j["eligibilityRestrictions"] = *v.eligibilityRestrictions;
    j["players"] = v.players; 
    j["platformId"] = v.platformId; 
    j["activityLocked"] = v.activityLocked; 
    j["maxPartySize"] = v.maxPartySize; 
    j["partyId"] = v.partyId; 
    j["activityResumeUtcMillis"] = v.activityResumeUtcMillis; 
    j["gameMode"] = v.gameMode; 
    j["version"] = v.version; 
    j["activeRestrictions"] = v.activeRestrictions; 
    j["activityStartedUtcMillis"] = v.activityStartedUtcMillis; 
    j["chat"] = v.chat; 
    j["eligibilityHash"] = v.eligibilityHash; 
  }
  inline void from_json(const json& j, LolLobbyPartyDto& v) {
    v.partyType = j.at("partyType").get<std::string>(); 
    if(auto it = j.find("eligibilityRestrictions"); it != j.end() && !it->is_null())
      v.eligibilityRestrictions = it->get<std::optional<std::vector<LolLobbyGatekeeperRestrictionDto>>>(); 
    v.players = j.at("players").get<std::vector<LolLobbyPartyMemberDto>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.activityLocked = j.at("activityLocked").get<bool>(); 
    v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
    v.partyId = j.at("partyId").get<std::string>(); 
    v.activityResumeUtcMillis = j.at("activityResumeUtcMillis").get<uint64_t>(); 
    v.gameMode = j.at("gameMode").get<LolLobbyGameModeDto>(); 
    v.version = j.at("version").get<uint64_t>(); 
    v.activeRestrictions = j.at("activeRestrictions").get<LolLobbyQueueRestrictionDto>(); 
    v.activityStartedUtcMillis = j.at("activityStartedUtcMillis").get<uint64_t>(); 
    v.chat = j.at("chat").get<LolLobbyPartyChatDto>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
  }
}