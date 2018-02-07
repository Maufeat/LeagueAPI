#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatErrorResource { 
    uint64_t id;
    std::string from;
    uint64_t code;
    std::string message;
    std::string text; 
  };
  inline void to_json(json& j, const LolChatErrorResource& v) {
    j["id"] = v.id; 
    j["from"] = v.from; 
    j["code"] = v.code; 
    j["message"] = v.message; 
    j["text"] = v.text; 
  }
  inline void from_json(const json& j, LolChatErrorResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.from = j.at("from").get<std::string>(); 
    v.code = j.at("code").get<uint64_t>(); 
    v.message = j.at("message").get<std::string>(); 
    v.text = j.at("text").get<std::string>(); 
  }
}