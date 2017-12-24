#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatFriendResource { 
    int32_t icon;
    std::string note;
    uint32_t groupId;
    std::map<std::string, std::string> lol;
    bool isP2PConversationMuted;
    std::string name;
    uint64_t id;
    std::string statusMessage;
    uint32_t displayGroupId;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string availability; 
  };
  inline void to_json(json& j, const LolChatFriendResource& v) {
    j["icon"] = v.icon; 
    j["note"] = v.note; 
    j["groupId"] = v.groupId; 
    j["lol"] = v.lol; 
    j["isP2PConversationMuted"] = v.isP2PConversationMuted; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["statusMessage"] = v.statusMessage; 
    j["displayGroupId"] = v.displayGroupId; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["availability"] = v.availability; 
  }
  inline void from_json(const json& j, LolChatFriendResource& v) {
    v.icon = j.at("icon").get<int32_t>(); 
    v.note = j.at("note").get<std::string>(); 
    v.groupId = j.at("groupId").get<uint32_t>(); 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
    v.isP2PConversationMuted = j.at("isP2PConversationMuted").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.statusMessage = j.at("statusMessage").get<std::string>(); 
    v.displayGroupId = j.at("displayGroupId").get<uint32_t>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.availability = j.at("availability").get<std::string>(); 
  }
}