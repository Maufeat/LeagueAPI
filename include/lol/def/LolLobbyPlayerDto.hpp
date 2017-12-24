#pragma once
#include "../base_def.hpp" 
#include "LolLobbyPartyDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace lol {
  struct LolLobbyPlayerDto { 
    uint64_t summonerId;
    std::string platformId;
    uint64_t createdAt;
    std::optional<std::string> leaguesToken;
    std::string puuid;
    std::optional<std::string> inventoryToken;
    std::optional<std::vector<LolLobbyPartyMemberDto>> parties;
    std::optional<LolLobbyPartyDto> currentParty;
    uint64_t accountId;
    uint64_t version;
    std::optional<std::string> summonerToken;
    std::optional<std::string> accountToken;
    int64_t eligibilityHash;
    int64_t serverUtcMillis; 
  };
  inline void to_json(json& j, const LolLobbyPlayerDto& v) {
    j["summonerId"] = v.summonerId; 
    j["platformId"] = v.platformId; 
    j["createdAt"] = v.createdAt; 
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    j["puuid"] = v.puuid; 
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    if(v.parties)
      j["parties"] = *v.parties;
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    j["accountId"] = v.accountId; 
    j["version"] = v.version; 
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
    j["eligibilityHash"] = v.eligibilityHash; 
    j["serverUtcMillis"] = v.serverUtcMillis; 
  }
  inline void from_json(const json& j, LolLobbyPlayerDto& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<uint64_t>(); 
    if(auto it = j.find("leaguesToken"); it != j.end() && !it->is_null())
      v.leaguesToken = it->get<std::optional<std::string>>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    if(auto it = j.find("inventoryToken"); it != j.end() && !it->is_null())
      v.inventoryToken = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("parties"); it != j.end() && !it->is_null())
      v.parties = it->get<std::optional<std::vector<LolLobbyPartyMemberDto>>>(); 
    if(auto it = j.find("currentParty"); it != j.end() && !it->is_null())
      v.currentParty = it->get<std::optional<LolLobbyPartyDto>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.version = j.at("version").get<uint64_t>(); 
    if(auto it = j.find("summonerToken"); it != j.end() && !it->is_null())
      v.summonerToken = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("accountToken"); it != j.end() && !it->is_null())
      v.accountToken = it->get<std::optional<std::string>>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
    v.serverUtcMillis = j.at("serverUtcMillis").get<int64_t>(); 
  }
}