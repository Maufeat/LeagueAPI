#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatFriendResource { 
    uint64_t id;
    std::string name;
    int32_t icon;
    std::string availability;
    std::string statusMessage;
    std::string note;
    std::optional<std::string> lastSeenOnlineTimestamp;
    bool isP2PConversationMuted;
    uint32_t groupId;
    uint32_t displayGroupId;
    std::map<std::string, std::string> lol; 
  };
  inline void to_json(json& j, const LolChatFriendResource& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["icon"] = v.icon; 
    j["availability"] = v.availability; 
    j["statusMessage"] = v.statusMessage; 
    j["note"] = v.note; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted; 
    j["groupId"] = v.groupId; 
    j["displayGroupId"] = v.displayGroupId; 
    j["lol"] = v.lol; 
  }
  inline void from_json(const json& j, LolChatFriendResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.icon = j.at("icon").get<int32_t>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.statusMessage = j.at("statusMessage").get<std::string>(); 
    v.note = j.at("note").get<std::string>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>(); 
    v.groupId = j.at("groupId").get<uint32_t>(); 
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>(); 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
  }
}