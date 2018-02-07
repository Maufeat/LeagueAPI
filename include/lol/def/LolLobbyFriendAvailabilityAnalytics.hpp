#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyFriendAvailabilityAnalytics { 
    std::string puuid;
    uint64_t summonerId;
    std::string platformId;
    std::string eventType;
    json eventData;
    uint64_t eventTimestamp;
    uint32_t numFriends;
    uint32_t numFriendsOnline;
    uint32_t numFriendsAvailable;
    uint32_t numFriendsAway;
    uint32_t numFriendsInGame;
    uint32_t numFriendsMobile; 
  };
  inline void to_json(json& j, const LolLobbyFriendAvailabilityAnalytics& v) {
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["platformId"] = v.platformId; 
    j["eventType"] = v.eventType; 
    j["eventData"] = v.eventData; 
    j["eventTimestamp"] = v.eventTimestamp; 
    j["numFriends"] = v.numFriends; 
    j["numFriendsOnline"] = v.numFriendsOnline; 
    j["numFriendsAvailable"] = v.numFriendsAvailable; 
    j["numFriendsAway"] = v.numFriendsAway; 
    j["numFriendsInGame"] = v.numFriendsInGame; 
    j["numFriendsMobile"] = v.numFriendsMobile; 
  }
  inline void from_json(const json& j, LolLobbyFriendAvailabilityAnalytics& v) {
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.eventType = j.at("eventType").get<std::string>(); 
    v.eventData = j.at("eventData").get<json>(); 
    v.eventTimestamp = j.at("eventTimestamp").get<uint64_t>(); 
    v.numFriends = j.at("numFriends").get<uint32_t>(); 
    v.numFriendsOnline = j.at("numFriendsOnline").get<uint32_t>(); 
    v.numFriendsAvailable = j.at("numFriendsAvailable").get<uint32_t>(); 
    v.numFriendsAway = j.at("numFriendsAway").get<uint32_t>(); 
    v.numFriendsInGame = j.at("numFriendsInGame").get<uint32_t>(); 
    v.numFriendsMobile = j.at("numFriendsMobile").get<uint32_t>(); 
  }
}