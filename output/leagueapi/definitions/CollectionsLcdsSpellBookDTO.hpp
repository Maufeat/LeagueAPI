#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/CollectionsLcdsSpellBookPageDTO.hpp>"

namespace leagueapi {
  struct CollectionsLcdsSpellBookDTO { /**/ 
    std::vector<CollectionsLcdsSpellBookPageDTO> bookPages;/**/
    uint64_t summonerId;/**/
    std::string dateString;/**/
  };
  static void to_json(json& j, const CollectionsLcdsSpellBookDTO& v) { 
    j["bookPages"] = v.bookPages;
    j["summonerId"] = v.summonerId;
    j["dateString"] = v.dateString;
  }
  static void from_json(const json& j, CollectionsLcdsSpellBookDTO& v) { 
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsSpellBookPageDTO>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
  }
} 