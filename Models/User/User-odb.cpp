// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "User-odb.hpp"

#include <cassert>
#include <cstring>  // std::memcpy

#include <odb/schema-catalog-impl.hxx>

#include <odb/sqlite/traits.hxx>
#include <odb/sqlite/database.hxx>
#include <odb/sqlite/transaction.hxx>
#include <odb/sqlite/connection.hxx>
#include <odb/sqlite/statement.hxx>
#include <odb/sqlite/statement-cache.hxx>
#include <odb/sqlite/simple-object-statements.hxx>
#include <odb/sqlite/container-statements.hxx>
#include <odb/sqlite/exceptions.hxx>
#include <odb/sqlite/simple-object-result.hxx>

namespace odb
{
  // User
  //

  struct access::object_traits_impl< ::User, id_sqlite >::extra_statement_cache_type
  {
    extra_statement_cache_type (
      sqlite::connection&,
      image_type&,
      id_image_type&,
      sqlite::binding&,
      sqlite::binding&)
    {
    }
  };

  access::object_traits_impl< ::User, id_sqlite >::id_type
  access::object_traits_impl< ::User, id_sqlite >::
  id (const id_image_type& i)
  {
    sqlite::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        id,
        i.id_value,
        i.id_null);
    }

    return id;
  }

  access::object_traits_impl< ::User, id_sqlite >::id_type
  access::object_traits_impl< ::User, id_sqlite >::
  id (const image_type& i)
  {
    sqlite::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        id,
        i.id_value,
        i.id_null);
    }

    return id;
  }

  bool access::object_traits_impl< ::User, id_sqlite >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // id
    //
    t[0UL] = false;

    // firebaseID
    //
    if (t[1UL])
    {
      i.firebaseID_value.capacity (i.firebaseID_size);
      grew = true;
    }

    // lat
    //
    t[2UL] = false;

    // lng
    //
    t[3UL] = false;

    // minMagPreference
    //
    t[4UL] = false;

    // maxDistancePreference
    //
    t[5UL] = false;

    // minMillisNotificationDelay
    //
    t[6UL] = false;

    // lastNotificationMillis
    //
    t[7UL] = false;

    // receiveRealTimeNotification
    //
    t[8UL] = false;

    // lastActivity
    //
    t[9UL] = false;

    // lastModify
    //
    t[10UL] = false;

    // secretKey
    //
    if (t[11UL])
    {
      i.secretKey_value.capacity (i.secretKey_size);
      grew = true;
    }

    // username
    //
    if (t[12UL])
    {
      i.username_value.capacity (i.username_size);
      grew = true;
    }

    return grew;
  }

  void access::object_traits_impl< ::User, id_sqlite >::
  bind (sqlite::bind* b,
        image_type& i,
        sqlite::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace sqlite;

    std::size_t n (0);

    // id
    //
    if (sk != statement_update)
    {
      b[n].type = sqlite::bind::integer;
      b[n].buffer = &i.id_value;
      b[n].is_null = &i.id_null;
      n++;
    }

    // firebaseID
    //
    b[n].type = sqlite::image_traits<
      ::std::string,
      sqlite::id_text>::bind_value;
    b[n].buffer = i.firebaseID_value.data ();
    b[n].size = &i.firebaseID_size;
    b[n].capacity = i.firebaseID_value.capacity ();
    b[n].is_null = &i.firebaseID_null;
    n++;

    // lat
    //
    b[n].type = sqlite::bind::real;
    b[n].buffer = &i.lat_value;
    b[n].is_null = &i.lat_null;
    n++;

    // lng
    //
    b[n].type = sqlite::bind::real;
    b[n].buffer = &i.lng_value;
    b[n].is_null = &i.lng_null;
    n++;

    // minMagPreference
    //
    b[n].type = sqlite::bind::real;
    b[n].buffer = &i.minMagPreference_value;
    b[n].is_null = &i.minMagPreference_null;
    n++;

    // maxDistancePreference
    //
    b[n].type = sqlite::bind::real;
    b[n].buffer = &i.maxDistancePreference_value;
    b[n].is_null = &i.maxDistancePreference_null;
    n++;

    // minMillisNotificationDelay
    //
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.minMillisNotificationDelay_value;
    b[n].is_null = &i.minMillisNotificationDelay_null;
    n++;

    // lastNotificationMillis
    //
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.lastNotificationMillis_value;
    b[n].is_null = &i.lastNotificationMillis_null;
    n++;

    // receiveRealTimeNotification
    //
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.receiveRealTimeNotification_value;
    b[n].is_null = &i.receiveRealTimeNotification_null;
    n++;

    // lastActivity
    //
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.lastActivity_value;
    b[n].is_null = &i.lastActivity_null;
    n++;

    // lastModify
    //
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.lastModify_value;
    b[n].is_null = &i.lastModify_null;
    n++;

    // secretKey
    //
    b[n].type = sqlite::image_traits<
      ::std::string,
      sqlite::id_text>::bind_value;
    b[n].buffer = i.secretKey_value.data ();
    b[n].size = &i.secretKey_size;
    b[n].capacity = i.secretKey_value.capacity ();
    b[n].is_null = &i.secretKey_null;
    n++;

    // username
    //
    b[n].type = sqlite::image_traits<
      ::std::string,
      sqlite::id_text>::bind_value;
    b[n].buffer = i.username_value.data ();
    b[n].size = &i.username_size;
    b[n].capacity = i.username_value.capacity ();
    b[n].is_null = &i.username_null;
    n++;
  }

  void access::object_traits_impl< ::User, id_sqlite >::
  bind (sqlite::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.id_value;
    b[n].is_null = &i.id_null;
  }

  bool access::object_traits_impl< ::User, id_sqlite >::
  init (image_type& i,
        const object_type& o,
        sqlite::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace sqlite;

    bool grew (false);

    // id
    //
    if (sk == statement_insert)
    {
      long int const& v =
        o.id;

      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.id_value,
        is_null,
        v);
      i.id_null = is_null;
    }

    // firebaseID
    //
    {
      ::std::string const& v =
        o.firebaseID;

      bool is_null (false);
      std::size_t cap (i.firebaseID_value.capacity ());
      sqlite::value_traits<
          ::std::string,
          sqlite::id_text >::set_image (
        i.firebaseID_value,
        i.firebaseID_size,
        is_null,
        v);
      i.firebaseID_null = is_null;
      grew = grew || (cap != i.firebaseID_value.capacity ());
    }

    // lat
    //
    {
      double const& v =
        o.lat;

      bool is_null (true);
      sqlite::value_traits<
          double,
          sqlite::id_real >::set_image (
        i.lat_value,
        is_null,
        v);
      i.lat_null = is_null;
    }

    // lng
    //
    {
      double const& v =
        o.lng;

      bool is_null (true);
      sqlite::value_traits<
          double,
          sqlite::id_real >::set_image (
        i.lng_value,
        is_null,
        v);
      i.lng_null = is_null;
    }

    // minMagPreference
    //
    {
      double const& v =
        o.minMagPreference;

      bool is_null (true);
      sqlite::value_traits<
          double,
          sqlite::id_real >::set_image (
        i.minMagPreference_value,
        is_null,
        v);
      i.minMagPreference_null = is_null;
    }

    // maxDistancePreference
    //
    {
      double const& v =
        o.maxDistancePreference;

      bool is_null (true);
      sqlite::value_traits<
          double,
          sqlite::id_real >::set_image (
        i.maxDistancePreference_value,
        is_null,
        v);
      i.maxDistancePreference_null = is_null;
    }

    // minMillisNotificationDelay
    //
    {
      long int const& v =
        o.minMillisNotificationDelay;

      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.minMillisNotificationDelay_value,
        is_null,
        v);
      i.minMillisNotificationDelay_null = is_null;
    }

    // lastNotificationMillis
    //
    {
      long int const& v =
        o.lastNotificationMillis;

      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.lastNotificationMillis_value,
        is_null,
        v);
      i.lastNotificationMillis_null = is_null;
    }

    // receiveRealTimeNotification
    //
    {
      bool const& v =
        o.receiveRealTimeNotification;

      bool is_null (false);
      sqlite::value_traits<
          bool,
          sqlite::id_integer >::set_image (
        i.receiveRealTimeNotification_value,
        is_null,
        v);
      i.receiveRealTimeNotification_null = is_null;
    }

    // lastActivity
    //
    {
      long int const& v =
        o.lastActivity;

      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.lastActivity_value,
        is_null,
        v);
      i.lastActivity_null = is_null;
    }

    // lastModify
    //
    {
      long int const& v =
        o.lastModify;

      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.lastModify_value,
        is_null,
        v);
      i.lastModify_null = is_null;
    }

    // secretKey
    //
    {
      ::std::string const& v =
        o.secretKey;

      bool is_null (false);
      std::size_t cap (i.secretKey_value.capacity ());
      sqlite::value_traits<
          ::std::string,
          sqlite::id_text >::set_image (
        i.secretKey_value,
        i.secretKey_size,
        is_null,
        v);
      i.secretKey_null = is_null;
      grew = grew || (cap != i.secretKey_value.capacity ());
    }

    // username
    //
    {
      ::std::string const& v =
        o.username;

      bool is_null (false);
      std::size_t cap (i.username_value.capacity ());
      sqlite::value_traits<
          ::std::string,
          sqlite::id_text >::set_image (
        i.username_value,
        i.username_size,
        is_null,
        v);
      i.username_null = is_null;
      grew = grew || (cap != i.username_value.capacity ());
    }

    return grew;
  }

  void access::object_traits_impl< ::User, id_sqlite >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // id
    //
    {
      long int& v =
        o.id;

      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        v,
        i.id_value,
        i.id_null);
    }

    // firebaseID
    //
    {
      ::std::string& v =
        o.firebaseID;

      sqlite::value_traits<
          ::std::string,
          sqlite::id_text >::set_value (
        v,
        i.firebaseID_value,
        i.firebaseID_size,
        i.firebaseID_null);
    }

    // lat
    //
    {
      double& v =
        o.lat;

      sqlite::value_traits<
          double,
          sqlite::id_real >::set_value (
        v,
        i.lat_value,
        i.lat_null);
    }

    // lng
    //
    {
      double& v =
        o.lng;

      sqlite::value_traits<
          double,
          sqlite::id_real >::set_value (
        v,
        i.lng_value,
        i.lng_null);
    }

    // minMagPreference
    //
    {
      double& v =
        o.minMagPreference;

      sqlite::value_traits<
          double,
          sqlite::id_real >::set_value (
        v,
        i.minMagPreference_value,
        i.minMagPreference_null);
    }

    // maxDistancePreference
    //
    {
      double& v =
        o.maxDistancePreference;

      sqlite::value_traits<
          double,
          sqlite::id_real >::set_value (
        v,
        i.maxDistancePreference_value,
        i.maxDistancePreference_null);
    }

    // minMillisNotificationDelay
    //
    {
      long int& v =
        o.minMillisNotificationDelay;

      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        v,
        i.minMillisNotificationDelay_value,
        i.minMillisNotificationDelay_null);
    }

    // lastNotificationMillis
    //
    {
      long int& v =
        o.lastNotificationMillis;

      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        v,
        i.lastNotificationMillis_value,
        i.lastNotificationMillis_null);
    }

    // receiveRealTimeNotification
    //
    {
      bool& v =
        o.receiveRealTimeNotification;

      sqlite::value_traits<
          bool,
          sqlite::id_integer >::set_value (
        v,
        i.receiveRealTimeNotification_value,
        i.receiveRealTimeNotification_null);
    }

    // lastActivity
    //
    {
      long int& v =
        o.lastActivity;

      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        v,
        i.lastActivity_value,
        i.lastActivity_null);
    }

    // lastModify
    //
    {
      long int& v =
        o.lastModify;

      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        v,
        i.lastModify_value,
        i.lastModify_null);
    }

    // secretKey
    //
    {
      ::std::string& v =
        o.secretKey;

      sqlite::value_traits<
          ::std::string,
          sqlite::id_text >::set_value (
        v,
        i.secretKey_value,
        i.secretKey_size,
        i.secretKey_null);
    }

    // username
    //
    {
      ::std::string& v =
        o.username;

      sqlite::value_traits<
          ::std::string,
          sqlite::id_text >::set_value (
        v,
        i.username_value,
        i.username_size,
        i.username_null);
    }
  }

  void access::object_traits_impl< ::User, id_sqlite >::
  init (id_image_type& i, const id_type& id)
  {
    {
      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.id_value,
        is_null,
        id);
      i.id_null = is_null;
    }
  }

  const char access::object_traits_impl< ::User, id_sqlite >::persist_statement[] =
  "INSERT INTO \"User\" "
  "(\"id\", "
  "\"firebaseID\", "
  "\"lat\", "
  "\"lng\", "
  "\"minMagPreference\", "
  "\"maxDistancePreference\", "
  "\"minMillisNotificationDelay\", "
  "\"lastNotificationMillis\", "
  "\"receiveRealTimeNotification\", "
  "\"lastActivity\", "
  "\"lastModify\", "
  "\"secretKey\", "
  "\"username\") "
  "VALUES "
  "(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";

  const char access::object_traits_impl< ::User, id_sqlite >::find_statement[] =
  "SELECT "
  "\"User\".\"id\", "
  "\"User\".\"firebaseID\", "
  "\"User\".\"lat\", "
  "\"User\".\"lng\", "
  "\"User\".\"minMagPreference\", "
  "\"User\".\"maxDistancePreference\", "
  "\"User\".\"minMillisNotificationDelay\", "
  "\"User\".\"lastNotificationMillis\", "
  "\"User\".\"receiveRealTimeNotification\", "
  "\"User\".\"lastActivity\", "
  "\"User\".\"lastModify\", "
  "\"User\".\"secretKey\", "
  "\"User\".\"username\" "
  "FROM \"User\" "
  "WHERE \"User\".\"id\"=?";

  const char access::object_traits_impl< ::User, id_sqlite >::update_statement[] =
  "UPDATE \"User\" "
  "SET "
  "\"firebaseID\"=?, "
  "\"lat\"=?, "
  "\"lng\"=?, "
  "\"minMagPreference\"=?, "
  "\"maxDistancePreference\"=?, "
  "\"minMillisNotificationDelay\"=?, "
  "\"lastNotificationMillis\"=?, "
  "\"receiveRealTimeNotification\"=?, "
  "\"lastActivity\"=?, "
  "\"lastModify\"=?, "
  "\"secretKey\"=?, "
  "\"username\"=? "
  "WHERE \"id\"=?";

  const char access::object_traits_impl< ::User, id_sqlite >::erase_statement[] =
  "DELETE FROM \"User\" "
  "WHERE \"id\"=?";

  const char access::object_traits_impl< ::User, id_sqlite >::query_statement[] =
  "SELECT "
  "\"User\".\"id\", "
  "\"User\".\"firebaseID\", "
  "\"User\".\"lat\", "
  "\"User\".\"lng\", "
  "\"User\".\"minMagPreference\", "
  "\"User\".\"maxDistancePreference\", "
  "\"User\".\"minMillisNotificationDelay\", "
  "\"User\".\"lastNotificationMillis\", "
  "\"User\".\"receiveRealTimeNotification\", "
  "\"User\".\"lastActivity\", "
  "\"User\".\"lastModify\", "
  "\"User\".\"secretKey\", "
  "\"User\".\"username\" "
  "FROM \"User\"";

  const char access::object_traits_impl< ::User, id_sqlite >::erase_query_statement[] =
  "DELETE FROM \"User\"";

  const char access::object_traits_impl< ::User, id_sqlite >::table_name[] =
  "\"User\"";

  void access::object_traits_impl< ::User, id_sqlite >::
  persist (database& db, object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    callback (db,
              static_cast<const object_type&> (obj),
              callback_event::pre_persist);

    image_type& im (sts.image ());
    binding& imb (sts.insert_image_binding ());

    if (init (im, obj, statement_insert))
      im.version++;

    im.id_null = true;

    if (im.version != sts.insert_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_insert);
      sts.insert_image_version (im.version);
      imb.version++;
    }

    {
      id_image_type& i (sts.id_image ());
      binding& b (sts.id_image_binding ());
      if (i.version != sts.id_image_version () || b.version == 0)
      {
        bind (b.bind, i);
        sts.id_image_version (i.version);
        b.version++;
      }
    }

    insert_statement& st (sts.persist_statement ());
    if (!st.execute ())
      throw object_already_persistent ();

    obj.id = id (sts.id_image ());

    callback (db,
              static_cast<const object_type&> (obj),
              callback_event::post_persist);
  }

  void access::object_traits_impl< ::User, id_sqlite >::
  update (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace sqlite;
    using sqlite::update_statement;

    callback (db, obj, callback_event::pre_update);

    sqlite::transaction& tr (sqlite::transaction::current ());
    sqlite::connection& conn (tr.connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    const id_type& id (
      obj.id);
    id_image_type& idi (sts.id_image ());
    init (idi, id);

    image_type& im (sts.image ());
    if (init (im, obj, statement_update))
      im.version++;

    bool u (false);
    binding& imb (sts.update_image_binding ());
    if (im.version != sts.update_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_update);
      sts.update_image_version (im.version);
      imb.version++;
      u = true;
    }

    binding& idb (sts.id_image_binding ());
    if (idi.version != sts.update_id_image_version () ||
        idb.version == 0)
    {
      if (idi.version != sts.id_image_version () ||
          idb.version == 0)
      {
        bind (idb.bind, idi);
        sts.id_image_version (idi.version);
        idb.version++;
      }

      sts.update_id_image_version (idi.version);

      if (!u)
        imb.version++;
    }

    update_statement& st (sts.update_statement ());
    if (st.execute () == 0)
      throw object_not_persistent ();

    callback (db, obj, callback_event::post_update);
    pointer_cache_traits::update (db, obj);
  }

  void access::object_traits_impl< ::User, id_sqlite >::
  erase (database& db, const id_type& id)
  {
    using namespace sqlite;

    ODB_POTENTIALLY_UNUSED (db);

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    if (sts.erase_statement ().execute () != 1)
      throw object_not_persistent ();

    pointer_cache_traits::erase (db, id);
  }

  access::object_traits_impl< ::User, id_sqlite >::pointer_type
  access::object_traits_impl< ::User, id_sqlite >::
  find (database& db, const id_type& id)
  {
    using namespace sqlite;

    {
      pointer_type p (pointer_cache_traits::find (db, id));

      if (!pointer_traits::null_ptr (p))
        return p;
    }

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (l.locked ())
    {
      if (!find_ (sts, &id))
        return pointer_type ();
    }

    pointer_type p (
      access::object_factory<object_type, pointer_type>::create ());
    pointer_traits::guard pg (p);

    pointer_cache_traits::insert_guard ig (
      pointer_cache_traits::insert (db, id, p));

    object_type& obj (pointer_traits::get_ref (p));

    if (l.locked ())
    {
      select_statement& st (sts.find_statement ());
      ODB_POTENTIALLY_UNUSED (st);

      callback (db, obj, callback_event::pre_load);
      init (obj, sts.image (), &db);
      load_ (sts, obj, false);
      sts.load_delayed (0);
      l.unlock ();
      callback (db, obj, callback_event::post_load);
      pointer_cache_traits::load (ig.position ());
    }
    else
      sts.delay_load (id, obj, ig.position ());

    ig.release ();
    pg.release ();
    return p;
  }

  bool access::object_traits_impl< ::User, id_sqlite >::
  find (database& db, const id_type& id, object_type& obj)
  {
    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    reference_cache_traits::position_type pos (
      reference_cache_traits::insert (db, id, obj));
    reference_cache_traits::insert_guard ig (pos);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, false);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    reference_cache_traits::load (pos);
    ig.release ();
    return true;
  }

  bool access::object_traits_impl< ::User, id_sqlite >::
  reload (database& db, object_type& obj)
  {
    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.id);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, true);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    return true;
  }

  bool access::object_traits_impl< ::User, id_sqlite >::
  find_ (statements_type& sts,
         const id_type* id)
  {
    using namespace sqlite;

    id_image_type& i (sts.id_image ());
    init (i, *id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    select_statement& st (sts.find_statement ());

    st.execute ();
    auto_result ar (st);
    select_statement::result r (st.fetch ());

    if (r == select_statement::truncated)
    {
      if (grow (im, sts.select_image_truncated ()))
        im.version++;

      if (im.version != sts.select_image_version ())
      {
        bind (imb.bind, im, statement_select);
        sts.select_image_version (im.version);
        imb.version++;
        st.refetch ();
      }
    }

    return r != select_statement::no_data;
  }

  result< access::object_traits_impl< ::User, id_sqlite >::object_type >
  access::object_traits_impl< ::User, id_sqlite >::
  query (database&, const query_base_type& q)
  {
    using namespace sqlite;
    using odb::details::shared;
    using odb::details::shared_ptr;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());

    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    std::string text (query_statement);
    if (!q.empty ())
    {
      text += " ";
      text += q.clause ();
    }

    q.init_parameters ();
    shared_ptr<select_statement> st (
      new (shared) select_statement (
        conn,
        text,
        false,
        true,
        q.parameters_binding (),
        imb));

    st->execute ();

    shared_ptr< odb::object_result_impl<object_type> > r (
      new (shared) sqlite::object_result_impl<object_type> (
        q, st, sts, 0));

    return result<object_type> (r);
  }

  unsigned long long access::object_traits_impl< ::User, id_sqlite >::
  erase_query (database&, const query_base_type& q)
  {
    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());

    std::string text (erase_query_statement);
    if (!q.empty ())
    {
      text += ' ';
      text += q.clause ();
    }

    q.init_parameters ();
    delete_statement st (
      conn,
      text,
      q.parameters_binding ());

    return st.execute ();
  }
}

namespace odb
{
  static bool
  create_schema (database& db, unsigned short pass, bool drop)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (pass);
    ODB_POTENTIALLY_UNUSED (drop);

    if (drop)
    {
      switch (pass)
      {
        case 1:
        {
          return true;
        }
        case 2:
        {
          db.execute ("DROP TABLE IF EXISTS \"User\"");
          return false;
        }
      }
    }
    else
    {
      switch (pass)
      {
        case 1:
        {
          db.execute ("CREATE TABLE \"User\" (\n"
                      "  \"id\" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,\n"
                      "  \"firebaseID\" TEXT NOT NULL,\n"
                      "  \"lat\" REAL NULL,\n"
                      "  \"lng\" REAL NULL,\n"
                      "  \"minMagPreference\" REAL NULL,\n"
                      "  \"maxDistancePreference\" REAL NULL,\n"
                      "  \"minMillisNotificationDelay\" INTEGER NOT NULL,\n"
                      "  \"lastNotificationMillis\" INTEGER NOT NULL,\n"
                      "  \"receiveRealTimeNotification\" INTEGER NOT NULL,\n"
                      "  \"lastActivity\" INTEGER NOT NULL,\n"
                      "  \"lastModify\" INTEGER NOT NULL,\n"
                      "  \"secretKey\" TEXT NOT NULL,\n"
                      "  \"username\" TEXT NOT NULL)");
          return false;
        }
      }
    }

    return false;
  }

  static const schema_catalog_create_entry
  create_schema_entry_ (
    id_sqlite,
    "",
    &create_schema);
}

#include <odb/post.hxx>
