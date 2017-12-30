#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatFriendResource { 
    std::string name;
    std::string note;
    uint64_t id;
    std::string availability;
    std::string statusMessage;
    int32_t icon;
    std::map<std::string, std::string> lol;
    uint32_t displayGroupId;
    std::optional<std::string> lastSeenOnlineTimestamp;
    bool isP2PConversationMuted;
    uint32_t groupId; 
  };
  inline void to_json(json& j, const LolChatFriendResource& v) {
    j["name"] = v.name; 
    j["note"] = v.note; 
    j["id"] = v.id; 
    j["availability"] = v.availability; 
    j["statusMessage"] = v.statusMessage; 
    j["icon"] = v.icon; 
    j["lol"] = v.lol; 
    j["displayGroupId"] = v.displayGroupId; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["isP2PConversationMuted"] = v.isP2PConversationMuted; 
    j["groupId"] = v.groupId; 
  }
  inline void from_json(const json& j, LolChatFriendResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.note = j.at("note").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.statusMessage = j.at("statusMessage").get<std::string>(); 
    v.icon = j.at("icon").get<int32_t>(); 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>(); 
    v.groupId = j.at("groupId").get<uint32_t>(); 
  }
}