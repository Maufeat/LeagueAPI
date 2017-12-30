#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyPartyDto.hpp"
namespace lol {
  struct LolLobbyPlayerDto { 
    int64_t serverUtcMillis;
    uint64_t version;
    uint64_t createdAt;
    int64_t eligibilityHash;
    std::optional<std::string> leaguesToken;
    std::optional<std::string> inventoryToken;
    uint64_t accountId;
    std::string puuid;
    std::optional<std::string> summonerToken;
    std::optional<LolLobbyPartyDto> currentParty;
    std::string platformId;
    std::optional<std::string> accountToken;
    uint64_t summonerId;
    std::optional<std::vector<LolLobbyPartyMemberDto>> parties; 
  };
  inline void to_json(json& j, const LolLobbyPlayerDto& v) {
    j["serverUtcMillis"] = v.serverUtcMillis; 
    j["version"] = v.version; 
    j["createdAt"] = v.createdAt; 
    j["eligibilityHash"] = v.eligibilityHash; 
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    j["platformId"] = v.platformId; 
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
    j["summonerId"] = v.summonerId; 
    if(v.parties)
      j["parties"] = *v.parties;
  }
  inline void from_json(const json& j, LolLobbyPlayerDto& v) {
    v.serverUtcMillis = j.at("serverUtcMillis").get<int64_t>(); 
    v.version = j.at("version").get<uint64_t>(); 
    v.createdAt = j.at("createdAt").get<uint64_t>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
    if(auto it = j.find("leaguesToken"); it != j.end() && !it->is_null())
      v.leaguesToken = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("inventoryToken"); it != j.end() && !it->is_null())
      v.inventoryToken = it->get<std::optional<std::string>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    if(auto it = j.find("summonerToken"); it != j.end() && !it->is_null())
      v.summonerToken = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("currentParty"); it != j.end() && !it->is_null())
      v.currentParty = it->get<std::optional<LolLobbyPartyDto>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    if(auto it = j.find("accountToken"); it != j.end() && !it->is_null())
      v.accountToken = it->get<std::optional<std::string>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    if(auto it = j.find("parties"); it != j.end() && !it->is_null())
      v.parties = it->get<std::optional<std::vector<LolLobbyPartyMemberDto>>>(); 
  }
}