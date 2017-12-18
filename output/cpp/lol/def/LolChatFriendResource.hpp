#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatFriendResource { 
    uint32_t groupId;
    int32_t icon;
    std::string statusMessage;
    uint32_t displayGroupId;
    std::string note;
    std::map<std::string, std::string> lol;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string name;
    std::string availability;
    bool isP2PConversationMuted;
    uint64_t id; 
  };
  inline void to_json(json& j, const LolChatFriendResource& v) {
    j["groupId"] = v.groupId; 
    j["icon"] = v.icon; 
    j["statusMessage"] = v.statusMessage; 
    j["displayGroupId"] = v.displayGroupId; 
    j["note"] = v.note; 
    j["lol"] = v.lol; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["name"] = v.name; 
    j["availability"] = v.availability; 
    j["isP2PConversationMuted"] = v.isP2PConversationMuted; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChatFriendResource& v) {
    v.groupId = j.at("groupId").get<uint32_t>(); 
    v.icon = j.at("icon").get<int32_t>(); 
    v.statusMessage = j.at("statusMessage").get<std::string>(); 
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>(); 
    v.note = j.at("note").get<std::string>(); 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}