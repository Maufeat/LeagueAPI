#pragma once
#include "../base_def.hpp" 
#include "LolChatConversationMessageResource.hpp"
namespace lol {
  struct LolChatConversationResource { 
    std::optional<LolChatConversationMessageResource> lastMessage;
    std::string inviterId;
    uint64_t unreadMessageCount;
    std::string name;
    std::string id;
    std::string password;
    std::string type;
    bool isMuted; 
  };
  inline void to_json(json& j, const LolChatConversationResource& v) {
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
    j["inviterId"] = v.inviterId; 
    j["unreadMessageCount"] = v.unreadMessageCount; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["password"] = v.password; 
    j["type"] = v.type; 
    j["isMuted"] = v.isMuted; 
  }
  inline void from_json(const json& j, LolChatConversationResource& v) {
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<std::optional<LolChatConversationMessageResource>>(); 
    v.inviterId = j.at("inviterId").get<std::string>(); 
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.isMuted = j.at("isMuted").get<bool>(); 
  }
}