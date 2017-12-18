#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsFrontEndResult { 
    std::string url; 
  };
  inline void to_json(json& j, const PaymentsFrontEndResult& v) {
    j["url"] = v.url; 
  }
  inline void from_json(const json& j, PaymentsFrontEndResult& v) {
    v.url = j.at("url").get<std::string>(); 
  }
}