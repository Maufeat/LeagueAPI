#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PaymentsFrontEndResult { 
    std::string url; 
  };
  void to_json(json& j, const PaymentsFrontEndResult& v) {
  j["url"] = v.url; 
  }
  void from_json(const json& j, PaymentsFrontEndResult& v) {
  v.url = j.at("url").get<std::string>(); 
  }
}