#pragma once
#include "../base_def.hpp" 
#include "LolChatConversationMessageResource.hpp"
namespace lol {
  struct LolChatConversationResource { 
    std::string name;
    std::string id;
    bool isMuted;
    std::string inviterId;
    uint64_t unreadMessageCount;
    std::string password;
    std::string type;
    std::optional<LolChatConversationMessageResource> lastMessage; 
  };
  inline void to_json(json& j, const LolChatConversationResource& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["isMuted"] = v.isMuted; 
    j["inviterId"] = v.inviterId; 
    j["unreadMessageCount"] = v.unreadMessageCount; 
    j["password"] = v.password; 
    j["type"] = v.type; 
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
  }
  inline void from_json(const json& j, LolChatConversationResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.isMuted = j.at("isMuted").get<bool>(); 
    v.inviterId = j.at("inviterId").get<std::string>(); 
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>(); 
    v.password = j.at("password").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<std::optional<LolChatConversationMessageResource>>(); 
  }
}