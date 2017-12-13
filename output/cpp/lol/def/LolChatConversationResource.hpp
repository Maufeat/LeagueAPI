#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatConversationMessageResource.hpp>
namespace lol {
  struct LolChatConversationResource { 
    std::string type;
    uint64_t unreadMessageCount;
    bool isMuted;
    std::string inviterId;
    std::string password;
    std::string name;
    std::optional<LolChatConversationMessageResource> lastMessage;
    std::string id; 
  };
  void to_json(json& j, const LolChatConversationResource& v) {
    j["type"] = v.type; 
    j["unreadMessageCount"] = v.unreadMessageCount; 
    j["isMuted"] = v.isMuted; 
    j["inviterId"] = v.inviterId; 
    j["password"] = v.password; 
    j["name"] = v.name; 
    if(v.lastMessage)
      j["lastMessage"] = *v.lastMessage;
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatConversationResource& v) {
    v.type = j.at("type").get<std::string>(); 
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>(); 
    v.isMuted = j.at("isMuted").get<bool>(); 
    v.inviterId = j.at("inviterId").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    if(auto it = j.find("lastMessage"); it != j.end() && !it->is_null())
      v.lastMessage = it->get<std::optional<LolChatConversationMessageResource>>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}