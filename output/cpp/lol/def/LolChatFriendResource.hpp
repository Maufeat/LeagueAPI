#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatFriendResource { 
    std::map<std::string, std::string> lol;
    std::optional<std::string> lastSeenOnlineTimestamp;
    uint64_t id;
    std::string name;
    std::string statusMessage;
    uint32_t displayGroupId;
    int32_t icon;
    std::string note;
    std::string availability;
    bool isP2PConversationMuted;
    uint32_t groupId; 
  };
  void to_json(json& j, const LolChatFriendResource& v) {
  j["lol"] = v.lol; 
  j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp; 
  j["id"] = v.id; 
  j["name"] = v.name; 
  j["statusMessage"] = v.statusMessage; 
  j["displayGroupId"] = v.displayGroupId; 
  j["icon"] = v.icon; 
  j["note"] = v.note; 
  j["availability"] = v.availability; 
  j["isP2PConversationMuted"] = v.isP2PConversationMuted; 
  j["groupId"] = v.groupId; 
  }
  void from_json(const json& j, LolChatFriendResource& v) {
  v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
  v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::optional<std::string>>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.statusMessage = j.at("statusMessage").get<std::string>(); 
  v.displayGroupId = j.at("displayGroupId").get<uint32_t>(); 
  v.icon = j.at("icon").get<int32_t>(); 
  v.note = j.at("note").get<std::string>(); 
  v.availability = j.at("availability").get<std::string>(); 
  v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>(); 
  v.groupId = j.at("groupId").get<uint32_t>(); 
  }
}