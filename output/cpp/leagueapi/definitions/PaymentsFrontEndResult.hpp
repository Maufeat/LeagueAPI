#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PaymentsFrontEndResult { /**/ 
    std::string url;/**/
  };
  static void to_json(json& j, const PaymentsFrontEndResult& v) { 
    j["url"] = v.url;
  }
  static void from_json(const json& j, PaymentsFrontEndResult& v) { 
    v.url = j.at("url").get<std::string>(); 
  }
} 