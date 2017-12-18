#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectMySelection.hpp>
namespace lol {
  inline Result<json> PatchLolChampSelectLegacyV1SessionMySelection(const LeagueClient& _client, const LolChampSelectLegacyChampSelectMySelection& selection)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("patch", "/lol-champ-select-legacy/v1/session/my-selection?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(selection).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}