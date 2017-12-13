#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyPartyDto.hpp>
#include <lol/def/LolLobbyPartyMemberDto.hpp>
namespace lol {
  struct LolLobbyPlayerDto { 
    int64_t eligibilityHash;
    uint64_t version;
    std::string platformId;
    std::optional<std::string> inventoryToken;
    int64_t serverUtcMillis;
    std::optional<std::string> leaguesToken;
    uint64_t createdAt;
    uint64_t summonerId;
    std::optional<LolLobbyPartyDto> currentParty;
    uint64_t accountId;
    std::optional<std::string> summonerToken;
    std::optional<std::string> accountToken;
    std::optional<std::vector<LolLobbyPartyMemberDto>> parties;
    std::string puuid; 
  };
  void to_json(json& j, const LolLobbyPlayerDto& v) {
  j["eligibilityHash"] = v.eligibilityHash; 
  j["version"] = v.version; 
  j["platformId"] = v.platformId; 
  j["inventoryToken"] = v.inventoryToken; 
  j["serverUtcMillis"] = v.serverUtcMillis; 
  j["leaguesToken"] = v.leaguesToken; 
  j["createdAt"] = v.createdAt; 
  j["summonerId"] = v.summonerId; 
  j["currentParty"] = v.currentParty; 
  j["accountId"] = v.accountId; 
  j["summonerToken"] = v.summonerToken; 
  j["accountToken"] = v.accountToken; 
  j["parties"] = v.parties; 
  j["puuid"] = v.puuid; 
  }
  void from_json(const json& j, LolLobbyPlayerDto& v) {
  v.eligibilityHash = j.at("eligibilityHash").get<int64_t>(); 
  v.version = j.at("version").get<uint64_t>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  v.inventoryToken = j.at("inventoryToken").get<std::optional<std::string>>(); 
  v.serverUtcMillis = j.at("serverUtcMillis").get<int64_t>(); 
  v.leaguesToken = j.at("leaguesToken").get<std::optional<std::string>>(); 
  v.createdAt = j.at("createdAt").get<uint64_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.currentParty = j.at("currentParty").get<std::optional<LolLobbyPartyDto>>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.summonerToken = j.at("summonerToken").get<std::optional<std::string>>(); 
  v.accountToken = j.at("accountToken").get<std::optional<std::string>>(); 
  v.parties = j.at("parties").get<std::optional<std::vector<LolLobbyPartyMemberDto>>>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  }
}