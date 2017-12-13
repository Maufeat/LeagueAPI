#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatErrorResource { 
    std::string text;
    std::string from;
    std::string message;
    uint64_t code;
    uint64_t id; 
  };
  void to_json(json& j, const LolChatErrorResource& v) {
    j["text"] = v.text; 
    j["from"] = v.from; 
    j["message"] = v.message; 
    j["code"] = v.code; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatErrorResource& v) {
    v.text = j.at("text").get<std::string>(); 
    v.from = j.at("from").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
    v.code = j.at("code").get<uint64_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}