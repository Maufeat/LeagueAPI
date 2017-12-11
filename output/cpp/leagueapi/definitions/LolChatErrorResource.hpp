#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatErrorResource { /**/ 
    std::string from;/**/
    std::string message;/**/
    uint64_t id;/**/
    uint64_t code;/**/
    std::string text;/**/
  };
  static void to_json(json& j, const LolChatErrorResource& v) { 
    j["from"] = v.from;
    j["message"] = v.message;
    j["id"] = v.id;
    j["code"] = v.code;
    j["text"] = v.text;
  }
  static void from_json(const json& j, LolChatErrorResource& v) { 
    v.from = j.at("from").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.code = j.at("code").get<uint64_t>(); 
    v.text = j.at("text").get<std::string>(); 
  }
} 