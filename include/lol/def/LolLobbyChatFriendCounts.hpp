#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyChatFriendCounts { 
    uint32_t numFriends;
    uint32_t numFriendsOnline;
    uint32_t numFriendsAvailable;
    uint32_t numFriendsAway;
    uint32_t numFriendsInQueue;
    uint32_t numFriendsInChampSelect;
    uint32_t numFriendsInGame;
    uint32_t numFriendsMobile; 
  };
  inline void to_json(json& j, const LolLobbyChatFriendCounts& v) {
    j["numFriends"] = v.numFriends; 
    j["numFriendsOnline"] = v.numFriendsOnline; 
    j["numFriendsAvailable"] = v.numFriendsAvailable; 
    j["numFriendsAway"] = v.numFriendsAway; 
    j["numFriendsInQueue"] = v.numFriendsInQueue; 
    j["numFriendsInChampSelect"] = v.numFriendsInChampSelect; 
    j["numFriendsInGame"] = v.numFriendsInGame; 
    j["numFriendsMobile"] = v.numFriendsMobile; 
  }
  inline void from_json(const json& j, LolLobbyChatFriendCounts& v) {
    v.numFriends = j.at("numFriends").get<uint32_t>(); 
    v.numFriendsOnline = j.at("numFriendsOnline").get<uint32_t>(); 
    v.numFriendsAvailable = j.at("numFriendsAvailable").get<uint32_t>(); 
    v.numFriendsAway = j.at("numFriendsAway").get<uint32_t>(); 
    v.numFriendsInQueue = j.at("numFriendsInQueue").get<uint32_t>(); 
    v.numFriendsInChampSelect = j.at("numFriendsInChampSelect").get<uint32_t>(); 
    v.numFriendsInGame = j.at("numFriendsInGame").get<uint32_t>(); 
    v.numFriendsMobile = j.at("numFriendsMobile").get<uint32_t>(); 
  }
}