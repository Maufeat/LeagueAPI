#pragma once
#include "../base_def.hpp" 
#include "LolChatConversationMessageResource.hpp"
namespace lol {
  struct LolChatConversationResource { 
    std::string id;
    std::string name;
    std::string type;
    std::string inviterId;
    std::string password;
    bool isMuted;
    uint64_t unreadMessageCount;
    std::optional<LolChatConversationMessageResource> lastMessage; 
  };
  inline void to_json(json& j, const LolChatConversationResource& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["type"] = v.type; 
    j["inviterId"] = v.inviterId; 
    j["password"] = v.password; 
    j["isMuted"] = v.isMuted; 
    j["unreadMessageCount"] = v.unreadMessageCount; 
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
  }
  inline void from_json(const json& j, LolChatConversationResource& v) {
    v.id = j.at("id").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.inviterId = j.at("inviterId").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
    v.isMuted = j.at("isMuted").get<bool>(); 
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>(); 
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<std::optional<LolChatConversationMessageResource>>(); 
  }
}