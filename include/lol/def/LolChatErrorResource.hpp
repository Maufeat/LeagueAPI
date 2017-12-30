#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatErrorResource { 
    std::string message;
    uint64_t id;
    uint64_t code;
    std::string from;
    std::string text; 
  };
  inline void to_json(json& j, const LolChatErrorResource& v) {
    j["message"] = v.message; 
    j["id"] = v.id; 
    j["code"] = v.code; 
    j["from"] = v.from; 
    j["text"] = v.text; 
  }
  inline void from_json(const json& j, LolChatErrorResource& v) {
    v.message = j.at("message").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.code = j.at("code").get<uint64_t>(); 
    v.from = j.at("from").get<std::string>(); 
    v.text = j.at("text").get<std::string>(); 
  }
}