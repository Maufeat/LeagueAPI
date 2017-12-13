#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPartyDto.hpp>
#include <lol/def/LolLobbyPartyMemberDto.hpp>
namespace lol {
  struct LolLobbyPlayerDto { 
    std::optional<std::string> inventoryToken;
    std::string platformId;
    uint64_t createdAt;
    int64_t eligibilityHash;
    std::string puuid;
    std::optional<std::string> leaguesToken;
    std::optional<std::vector<LolLobbyPartyMemberDto>> parties;
    std::optional<std::string> summonerToken;
    int64_t serverUtcMillis;
    std::optional<LolLobbyPartyDto> currentParty;
    uint64_t version;
    std::optional<std::string> accountToken;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolLobbyPlayerDto& v) {
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    j["platformId"] = v.platformId; 
    j["createdAt"] = v.createdAt; 
    j["eligibilityHash"] = v.eligibilityHash; 
    j["puuid"] = v.puuid; 
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    if(v.parties)
      j["parties"] = *v.parties;
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
    j["serverUtcMillis"] = v.serverUtcMillis; 
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    j["version"] = v.version; 
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLobbyPlayerDto& v) {
    if(auto it = j.find("inventoryToken"); it != j.end() && !it->is_null())
      v.inventoryToken = it->get<std::optional<std::string>>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<uint64_t>(); 
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    if(auto it = j.find("leaguesToken"); it != j.end() && !it->is_null())
      v.leaguesToken = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("parties"); it != j.end() && !it->is_null())
      v.parties = it->get<std::optional<std::vector<LolLobbyPartyMemberDto>>>(); 
    if(auto it = j.find("summonerToken"); it != j.end() && !it->is_null())
      v.summonerToken = it->get<std::optional<std::string>>(); 
    v.serverUtcMillis = j.at("serverUtcMillis").get<int64_t>(); 
    if(auto it = j.find("currentParty"); it != j.end() && !it->is_null())
      v.currentParty = it->get<std::optional<LolLobbyPartyDto>>(); 
    v.version = j.at("version").get<uint64_t>(); 
    if(auto it = j.find("accountToken"); it != j.end() && !it->is_null())
      v.accountToken = it->get<std::optional<std::string>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}