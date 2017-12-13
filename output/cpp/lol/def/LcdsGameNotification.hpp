#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsGameNotification { 
    std::string messageArgument;
    std::string type;
    std::string messageCode; 
  };
  void to_json(json& j, const LcdsGameNotification& v) {
    j["messageArgument"] = v.messageArgument; 
    j["type"] = v.type; 
    j["messageCode"] = v.messageCode; 
  }
  void from_json(const json& j, LcdsGameNotification& v) {
    v.messageArgument = j.at("messageArgument").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.messageCode = j.at("messageCode").get<std::string>(); 
  }
}