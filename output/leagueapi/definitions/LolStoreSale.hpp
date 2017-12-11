#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolStoreItemCost.hpp>"

namespace leagueapi {
  struct LolStoreSale { /**/ 
    std::string startDate;/**/
    std::string endDate;/**/
    std::vector<LolStoreItemCost> prices;/**/
  };
  static void to_json(json& j, const LolStoreSale& v) { 
    j["startDate"] = v.startDate;
    j["endDate"] = v.endDate;
    j["prices"] = v.prices;
  }
  static void from_json(const json& j, LolStoreSale& v) { 
    v.startDate = j.at("startDate").get<std::string>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>(); 
  }
} 