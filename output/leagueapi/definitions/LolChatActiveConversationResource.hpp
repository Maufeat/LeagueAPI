#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatActiveConversationResource { /**/ 
    std::string id;/**/
  };
  static void to_json(json& j, const LolChatActiveConversationResource& v) { 
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolChatActiveConversationResource& v) { 
    v.id = j.at("id").get<std::string>(); 
  }
} 