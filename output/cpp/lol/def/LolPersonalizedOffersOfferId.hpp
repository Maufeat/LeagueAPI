#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersOfferId { 
    std::string offerId; 
  };
  void to_json(json& j, const LolPersonalizedOffersOfferId& v) {
    j["offerId"] = v.offerId; 
  }
  void from_json(const json& j, LolPersonalizedOffersOfferId& v) {
    v.offerId = j.at("offerId").get<std::string>(); 
  }
}