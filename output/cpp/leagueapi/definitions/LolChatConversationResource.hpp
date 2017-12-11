#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChatConversationMessageResource.hpp>

namespace leagueapi {
  struct LolChatConversationResource { /**/ 
    std::string inviterId;/**/
    bool isMuted;/**/
    uint64_t unreadMessageCount;/**/
    std::string id;/**/
    std::string name;/**/
    std::string type;/**/
    std::optional<LolChatConversationMessageResource> lastMessage;/**/
    std::string password;/**/
  };
  static void to_json(json& j, const LolChatConversationResource& v) { 
    j["inviterId"] = v.inviterId;
    j["isMuted"] = v.isMuted;
    j["unreadMessageCount"] = v.unreadMessageCount;
    j["id"] = v.id;
    j["name"] = v.name;
    j["type"] = v.type;
    j["lastMessage"] = v.lastMessage;
    j["password"] = v.password;
  }
  static void from_json(const json& j, LolChatConversationResource& v) { 
    v.inviterId = j.at("inviterId").get<std::string>(); 
    v.isMuted = j.at("isMuted").get<bool>(); 
    v.unreadMessageCount = j.at("unreadMessageCount").get<uint64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.lastMessage = j.at("lastMessage").get<std::optional<LolChatConversationMessageResource>>(); 
    v.password = j.at("password").get<std::string>(); 
  }
} 