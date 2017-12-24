#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatErrorResource { 
    uint64_t id;
    uint64_t code;
    std::string from;
    std::string text;
    std::string message; 
  };
  inline void to_json(json& j, const LolChatErrorResource& v) {
    j["id"] = v.id; 
    j["code"] = v.code; 
    j["from"] = v.from; 
    j["text"] = v.text; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, LolChatErrorResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.code = j.at("code").get<uint64_t>(); 
    v.from = j.at("from").get<std::string>(); 
    v.text = j.at("text").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}